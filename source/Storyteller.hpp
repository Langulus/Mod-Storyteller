///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#pragma once
#include "Lore.hpp"
#include <Flow/Verbs/Create.hpp>


///                                                                           
///   Storyteller module                                                      
///                                                                           
struct Storyteller final : A::Module {
   LANGULUS(ABSTRACT) false;
   LANGULUS_BASES(A::Module);
   LANGULUS_VERBS(Verbs::Create);

private:
   // List of created lore systems                                      
   TFactory<Lore> mLore;

public:
    Storyteller(Runtime*, const Neat&);
   ~Storyteller();

   bool Update(Time);
   void Create(Verb&);
};