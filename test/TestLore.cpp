///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#include <Langulus/Entity/Thing.hpp>
#include <Langulus/Testing.hpp>


SCENARIO("Lore and Story creation", "[storyteller]") {
   static Allocator::State memoryState;
   
   for (int repeat = 0; repeat != 10; ++repeat) {
      GIVEN(std::string("Init and shutdown cycle #") + std::to_string(repeat)) {
         // Create root entity                                          
         auto root = Thing::Root<false>("Storyteller");

         WHEN("The units are created via tokens") {
            auto lore  = root.CreateUnitToken("Lore");
            auto story = root.CreateUnitToken("Story");

            // Update once                                              
            root.Update({});
            root.DumpHierarchy();

            REQUIRE(lore.GetCount() == 1);
            REQUIRE(lore.CastsTo<A::Unit>(1));
            REQUIRE(lore.IsSparse());
            REQUIRE(lore.Get<A::Unit>().GetReferences() == 5);

            REQUIRE(story.GetCount() == 1);
            REQUIRE(story.CastsTo<A::Unit>(1));
            REQUIRE(story.IsSparse());
            REQUIRE(story.Get<A::Unit>().GetReferences() == 4);

            REQUIRE(root.GetUnits().GetCount() == 2);
         }

         // Check for memory leaks after each cycle                     
         REQUIRE(memoryState.Assert());
      }
   }
}

