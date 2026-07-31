#pragma once

class CDOTA_Modifier_CrystalMaiden_IceRink_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bHitFirstUpdate; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    float32 flMovementSpeed; // offset 0x1A7C, size 0x4, align 4
    float32 m_flTurnBoostProgress; // offset 0x1A80, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1A84, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A88, size 0x4, align 255
    GameTime_t m_flHitEndTime; // offset 0x1A8C, size 0x4, align 255
    float32 hit_recover_time; // offset 0x1A90, size 0x4, align 4
    Vector m_vDirection; // offset 0x1A94, size 0xC, align 4
};
