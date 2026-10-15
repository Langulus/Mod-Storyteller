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
///                                                                           
struct Story final : Part, ProducedFrom<Lore> {
   using CTTI_Abstract = No;
   using CTTI_Producer = Lore;
   LANGULUS_BASES(Part);

public:
   Story(Lore*, Many const&);

   void Refresh();
};