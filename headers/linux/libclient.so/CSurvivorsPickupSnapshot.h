#pragma once

class CSurvivorsPickupSnapshot  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsPickupID_t m_pickupID; // offset 0x0, size 0x4, align 255
    int32 m_nExperienceReward; // offset 0x4, size 0x4, align 4
    VectorWS m_vOrigin; // offset 0x8, size 0xC, align 4
};
