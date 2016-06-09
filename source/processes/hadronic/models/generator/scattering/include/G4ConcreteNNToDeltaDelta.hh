//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//

#ifndef G4ConcreteNNToDeltaDelta_HH
#define G4ConcreteNNToDeltaDelta_HH

#include "globals.hh"
#include "G4VScatteringCollision.hh"
#include "G4VCrossSectionSource.hh"
#include "G4VAngularDistribution.hh"
#include "G4KineticTrackVector.hh"
#include "g4std/vector"
#include "G4XDeltaDeltaTable.hh"
#include "G4ConcreteNNTwoBodyResonance.hh"

class G4ConcreteNNToDeltaDelta : public G4ConcreteNNTwoBodyResonance
{

public:

  G4ConcreteNNToDeltaDelta(const G4ParticleDefinition* aPrimary,
		       const G4ParticleDefinition* bPriamry,
		       const G4ParticleDefinition* aSecondary,
		       const G4ParticleDefinition* bSecondary);

  virtual ~G4ConcreteNNToDeltaDelta() {};
  
  virtual G4String GetName() const
  {
    return "ConcreteNNToDeltaDelta";
  }

  G4bool operator==(const G4ConcreteNNToDeltaDelta &right) const;
  G4bool operator!=(const G4ConcreteNNToDeltaDelta &right) const;

private:  

  static G4XDeltaDeltaTable theSigmaTable;

};

#endif