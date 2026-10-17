#pragma once

class CDOTA_Modifier_CrystalMaiden_IceRink_Movement : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bHitFirstUpdate; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    float32 flMovementSpeed; // offset 0x1AAC, size 0x4, align 4
    float32 m_flTurnBoostProgress; // offset 0x1AB0, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1AB4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB8, size 0x4, align 255
    GameTime_t m_flHitEndTime; // offset 0x1ABC, size 0x4, align 255
    float32 hit_recover_time; // offset 0x1AC0, size 0x4, align 4
    Vector m_vDirection; // offset 0x1AC4, size 0xC, align 4
};
