#pragma once

class CGameModifier_PlayEffectOnDeath : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CUtlString m_sEffect; // offset 0x140, size 0x8, align 8
};
