///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#pragma once
#include "Story.hpp"
#include <Langulus/Flow/Factory.hpp>
#include <Langulus/Verbs/Create.hpp>


///                                                                           
///   Lore                                                                    
///                                                                           
struct Lore final : Part, ProducedFrom<Storyteller> {
   LANGULUS(ABSTRACT) false;
   LANGULUS(PRODUCER) Storyteller;
   LANGULUS_BASES(Part);
   LANGULUS_VERBS(Verbs::Create);

private:
   // List of created stories                                           
   TFactory<Story> mStories;

public:
   Lore(Storyteller*, Many const&);

   void Create(Verb&);
   void Refresh();
   void Teardown();
};