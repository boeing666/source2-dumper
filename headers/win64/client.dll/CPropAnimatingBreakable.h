#pragma once

class CPropAnimatingBreakable : public CBaseAnimGraph /*0x0*/  // sizeof 0xE00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    CBreakableStageHelper m_stages; // offset 0xDA0, size 0x18, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xDB8, size 0x18, align 255
    CEntityIOOutput m_OnFinalBreak; // offset 0xDD0, size 0x18, align 255
    CEntityIOOutput m_OnStageAdvanced; // offset 0xDE8, size 0x18, align 255
};
