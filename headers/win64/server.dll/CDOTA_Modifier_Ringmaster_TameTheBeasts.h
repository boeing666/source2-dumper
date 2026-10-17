#pragma once

class CDOTA_Modifier_Ringmaster_TameTheBeasts : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flPreviousMult; // offset 0x1AA8, size 0x4, align 4
    float32 m_fChannelTime; // offset 0x1AAC, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1AB0, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1AB4, size 0x4, align 255
    int32 has_debuff_immunity; // offset 0x1AB8, size 0x4, align 4
    int32 magic_resist; // offset 0x1ABC, size 0x4, align 4
};
