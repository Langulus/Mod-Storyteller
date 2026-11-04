///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#pragma once
#include "Export.hpp"
#include <Langulus/Producible.hpp>


///                                                                           
///   Story                                                                   
struct Story final : Things::Part, ProducedFrom<Lore> {
   using CTTI_Abstract  = No;
   using CTTI_Producer  = Lore;
   using CTTI_Bases     = Things::Part;

public:
   Story(Lore const*, Neat const&);

   void Refresh();
};