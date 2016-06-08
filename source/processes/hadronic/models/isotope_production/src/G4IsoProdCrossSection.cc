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
#include "G4IsoProdCrossSections.hh"

void G4IsoProdCrossSections::
Init(G4std::ifstream & aDataSet)
{
  G4int aNumberOfPoints;
  aDataSet>>aNumberOfPoints;
  theProductionCrossSections.Init(aDataSet, aNumberOfPoints, eV);
}

G4double G4IsoProdCrossSections::
GetProductionCrossSection(G4double anEnergy)
{
  G4double result;
  result = theProductionCrossSections.GetY(anEnergy);
  return result;
}

G4String G4IsoProdCrossSections::
GetProductIsotope()
{
  return theProductName;
}