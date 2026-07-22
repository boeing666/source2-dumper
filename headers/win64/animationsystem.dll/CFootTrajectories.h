#pragma once

class CFootTrajectories  // sizeof 0x18, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CFootTrajectory > m_trajectories; // offset 0x0, size 0x18, align 8
};
