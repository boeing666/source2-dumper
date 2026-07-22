#pragma once

class CDOTA_Modifier_CrystalMaiden_IceRink_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bHitFirstUpdate; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    float32 flMovementSpeed; // offset 0x1A5C, size 0x4, align 4
    float32 m_flTurnBoostProgress; // offset 0x1A60, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1A64, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A68, size 0x4, align 255
    GameTime_t m_flHitEndTime; // offset 0x1A6C, size 0x4, align 255
    float32 hit_recover_time; // offset 0x1A70, size 0x4, align 4
    Vector m_vDirection; // offset 0x1A74, size 0xC, align 4
};
