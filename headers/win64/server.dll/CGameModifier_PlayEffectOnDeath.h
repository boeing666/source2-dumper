#pragma once

class CGameModifier_PlayEffectOnDeath : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlString m_sEffect; // offset 0xD0, size 0x8, align 8
};
