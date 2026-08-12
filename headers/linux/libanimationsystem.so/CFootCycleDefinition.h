#pragma once

class CFootCycleDefinition  // sizeof 0x3C, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
public:
    Vector m_vStancePositionMS; // offset 0x0, size 0xC, align 4
    Vector m_vMidpointPositionMS; // offset 0xC, size 0xC, align 4
    float32 m_flStanceDirectionMS; // offset 0x18, size 0x4, align 4
    Vector m_vToStrideStartPos; // offset 0x1C, size 0xC, align 4
    CAnimCycle m_stanceCycle; // offset 0x28, size 0x4, align 4
    CFootCycle m_footLiftCycle; // offset 0x2C, size 0x4, align 4
    CFootCycle m_footOffCycle; // offset 0x30, size 0x4, align 4
    CFootCycle m_footStrikeCycle; // offset 0x34, size 0x4, align 4
    CFootCycle m_footLandCycle; // offset 0x38, size 0x4, align 4
};
