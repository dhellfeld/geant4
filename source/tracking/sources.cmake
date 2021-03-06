#------------------------------------------------------------------------------
# Module : G4tracking
# Package: Geant4.src.G4tracking
#------------------------------------------------------------------------------

#
# Define the Geant4 Module.
#
geant4_define_module(NAME G4tracking
  HEADERS
    G4AdjointCrossSurfChecker.hh
    G4AdjointSteppingAction.hh
    G4AdjointTrackingAction.hh
    G4RichTrajectory.hh
    G4RichTrajectoryPoint.hh
    G4SmoothTrajectory.hh
    G4SmoothTrajectoryPoint.hh
    G4SteppingManager.hh
    G4SteppingVerbose.hh
    G4TrackingManager.hh
    G4TrackingMessenger.hh
    G4Trajectory.hh
    G4TrajectoryPoint.hh
    G4UserSteppingAction.hh
    G4MultiSteppingAction.hh
    G4UserTrackingAction.hh
    G4MultiTrackingAction.hh
    G4VSteppingVerbose.hh
    G4VTrajectory.hh
    G4VTrajectoryPoint.hh
    trkgdefs.hh
  SOURCES
    G4AdjointCrossSurfChecker.cc
    G4AdjointSteppingAction.cc
    G4AdjointTrackingAction.cc
    G4RichTrajectory.cc
    G4RichTrajectoryPoint.cc
    G4SmoothTrajectory.cc
    G4SmoothTrajectoryPoint.cc
    G4SteppingManager.cc
    G4SteppingManager2.cc
    G4SteppingVerbose.cc
    G4TrackingManager.cc
    G4TrackingMessenger.cc
    G4Trajectory.cc
    G4TrajectoryPoint.cc
    G4UserSteppingAction.cc
    G4MultiSteppingAction.cc
    G4UserTrackingAction.cc
    G4MultiTrackingAction.cc
    G4VSteppingVerbose.cc
    G4VTrajectory.cc
    G4VTrajectoryPoint.cc
    G4MultiSteppingAction.cc
  GRANULAR_DEPENDENCIES
    G4csg
    G4cuts
    G4detector
    G4emutils
    G4geometrymng
    G4globman
    G4graphics_reps
    G4hits
    G4intercoms
    G4materials
    G4navigation
    G4partman
    G4procman
    G4track
    G4volumes
  GLOBAL_DEPENDENCIES
    G4digits_hits
    G4geometry
    G4global
    G4graphics_reps
    G4intercoms
    G4materials
    G4particles
    G4processes
    G4track
  LINK_LIBRARIES
)

# List any source specific properties here
