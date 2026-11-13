///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#include <Langulus/Thing.hpp>
#include <Langulus/Testing.hpp>
#include <Langulus/Allocator.hpp>

using namespace Langulus;
using Things::Thing;
using Things::Part;


SCENARIO("Lore and Story creation") {
   static MemoryState memoryState;
   
   GIVEN("Init and shutdown cycles") {
      for (int repeat = 0; repeat != 10; ++repeat) {
         // Create root entity                                          
         auto root = Thing::Root<false>("Storyteller");

         WHEN("The parts are created via tokens") {
            auto lore  = root.CreatePartToken("Lore");
            auto story = root.CreatePartToken("Story");

            // Update once                                              
            root.Update({});
            root.DumpHierarchy();

            REQUIRE(lore.GetCount() == 1);
            REQUIRE(lore.CastsTo<Part>(1));
            REQUIRE(lore.IsSparse());
            REQUIRE(lore.Get<Part>()->GetReferences() == 5);

            REQUIRE(story.GetCount() == 1);
            REQUIRE(story.CastsTo<Part>(1));
            REQUIRE(story.IsSparse());
            REQUIRE(story.Get<Part>()->GetReferences() == 4);

            REQUIRE(root.GetParts().GetCount() == 2);
         }

         REQUIRE(memoryState.Assert());
         REQUIRE_FALSE(Allocator::CollectGarbage());
      }
   }
}

