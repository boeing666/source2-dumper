#pragma once

class CPropAnimatingBreakable : public CBaseAnimGraph /*0x0*/  // sizeof 0xB40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    CBreakableStageHelper m_stages; // offset 0xAE0, size 0x18, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xAF8, size 0x18, align 255
    CEntityIOOutput m_OnFinalBreak; // offset 0xB10, size 0x18, align 255
    CEntityIOOutput m_OnStageAdvanced; // offset 0xB28, size 0x18, align 255
};
