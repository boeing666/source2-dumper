#pragma once

class CDOTA_Modifier_Meepo_MegaMeepo : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1AA8, size 0x4, align 255
    float32 m_flOffset; // offset 0x1AAC, size 0x4, align 4
    QAngle m_vStartAngles; // offset 0x1AB0, size 0xC, align 4
    VectorWS m_vStartLocation; // offset 0x1ABC, size 0xC, align 4
    bool m_bInterrupted; // offset 0x1AC8, size 0x1, align 1
    bool m_bHasBeenDestroyed; // offset 0x1AC9, size 0x1, align 1
    bool m_bIsHighestMeepo; // offset 0x1ACA, size 0x1, align 1
    char _pad_1ACB[0x5]; // offset 0x1ACB
};
