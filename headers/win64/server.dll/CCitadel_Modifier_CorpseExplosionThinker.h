#pragma once

class CCitadel_Modifier_CorpseExplosionThinker : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    GameTime_t m_flExplosionTime; // offset 0x140, size 0x4, align 255
    float32 m_flRadius; // offset 0x144, size 0x4, align 4
    float32 m_flDamage; // offset 0x148, size 0x4, align 4
    char _pad_014C[0x4]; // offset 0x14C
};
