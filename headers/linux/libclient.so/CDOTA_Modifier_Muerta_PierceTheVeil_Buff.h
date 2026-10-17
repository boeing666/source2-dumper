#pragma once

class CDOTA_Modifier_Muerta_PierceTheVeil_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 modelscale; // offset 0x1AA8, size 0x4, align 4
    int32 base_damage_percent; // offset 0x1AAC, size 0x4, align 4
    ParticleIndex_t m_nScreenFXIndex; // offset 0x1AB0, size 0x4, align 255
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
