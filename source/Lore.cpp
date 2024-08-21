///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#include "Lore.hpp"
#include "Storyteller.hpp"


/// Gatherer construction                                                     
///   @param producer - the system producer                                   
///   @param descriptor - instructions for configuring the lore               
Lore::Lore(Storyteller* producer, const Neat& descriptor)
   : Resolvable   {this}
   , ProducedFrom {producer, descriptor} {
   VERBOSE_STORYTELLER("Initializing...");
   Couple(descriptor);
   VERBOSE_STORYTELLER("Initialized");
}

/// Shutdown the module                                                       
Lore::~Lore() {

}

/// Produce stories                                                           
///   @param verb - creation verb to satisfy                                  
void Lore::Create(Verb& verb) {
   mStories.Create(this, verb);
}

/// React on environmental change                                             
void Lore::Refresh() {

}
