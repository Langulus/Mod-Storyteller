///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#include "Story.hpp"
#include "Storyteller.hpp"


/// Story construction                                                        
///   @param producer - the producer                                          
///   @param descriptor - instructions for generating the story               
Story::Story(Lore* producer, Describe descriptor)
   : Resolvable   {this}
   , ProducedFrom {producer, descriptor} {
   VERBOSE_STORYTELLER("Initializing...");
   Couple(descriptor);
   VERBOSE_STORYTELLER("Initialized");
}

/// React on environmental change                                             
void Story::Refresh() {

}