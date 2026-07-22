#pragma once

class CTriggerTrooperShrineJumpVolume : public CBaseTrigger /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    float32 m_flOuterRadius; // offset 0x8E0, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0x8E4, size 0x4, align 4
};
