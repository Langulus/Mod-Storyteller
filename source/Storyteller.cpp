///                                                                           
/// Langulus::Module::Storyteller                                             
/// Copyright (c) 2024 Dimo Markov <team@langulus.com>                        
/// Part of the Langulus framework, see https://langulus.com                  
///                                                                           
/// SPDX-License-Identifier: GPL-3.0-or-later                                 
///                                                                           
#include "Storyteller.hpp"

LANGULUS_DEFINE_MODULE(
   Storyteller, 0, "Storyteller",
   "Story generator", "",
   Storyteller, Lore, Story
)


/// Module construction                                                       
///   @param runtime - the runtime that owns the module                       
///   @param descriptor - instructions for configuring the module             
Storyteller::Storyteller(Runtime* runtime, const Many&)
   : Resolvable  {this}
   , A::Module   {runtime} {
   VERBOSE_STORYTELLER("Initializing...");
   VERBOSE_STORYTELLER("Initialized");
}

///                                                                           
Storyteller::~Storyteller() {

}

/// Module update routine                                                     
///   @param deltaTime - time between updates                                 
///   @return false if the module requested exit                              
bool Storyteller::Update(Time deltaTime) {
   return true;
}

/// Create/Destroy lore systems                                               
///   @param verb - the creation/destruction verb                             
void Storyteller::Create(Verb& verb) {
   mLore.Create(this, verb);
}
