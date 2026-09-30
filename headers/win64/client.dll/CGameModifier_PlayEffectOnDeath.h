#pragma once

class CGameModifier_PlayEffectOnDeath : public CCitadelModifier /*0x0*/  // sizeof 0x138, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    CUtlString m_sEffect; // offset 0x130, size 0x8, align 8
};
