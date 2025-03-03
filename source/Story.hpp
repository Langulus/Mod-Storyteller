///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#pragma once
#include "Common.hpp"
#include <Langulus/Flow/Producible.hpp>


///                                                                           
///   Story                                                                   
///                                                                           
struct Story final : A::Unit, ProducedFrom<Lore> {
   LANGULUS(ABSTRACT) false;
   LANGULUS(PRODUCER) Lore;
   LANGULUS_BASES(A::Unit);

public:
   Story(Lore*, const Many&);

   void Refresh();
};