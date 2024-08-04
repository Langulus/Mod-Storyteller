///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#pragma once
#include <Langulus.hpp>

using namespace Langulus;

struct Storyteller;
struct Lore;
struct Story;

#if 1
   #define VERBOSE_STORYTELLER_ENABLED() 1
   #define VERBOSE_STORYTELLER(...)      Logger::Info(Self(), __VA_ARGS__)
   #define VERBOSE_STORYTELLER_TAB(...)  const auto tab = Logger::InfoTab(Self(), __VA_ARGS__)
#else
   #define VERBOSE_STORYTELLER_ENABLED() 0
   #define VERBOSE_STORYTELLER(...)      LANGULUS(NOOP)
   #define VERBOSE_STORYTELLER_TAB(...)  LANGULUS(NOOP)
#endif