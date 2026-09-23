#pragma once

class CTriggerBrush : public CBaseModelEntity /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x850, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x868, size 0x18, align 255
    CEntityIOOutput m_OnUse; // offset 0x880, size 0x18, align 255
    int32 m_iInputFilter; // offset 0x898, size 0x4, align 4
    int32 m_iDontMessageParent; // offset 0x89C, size 0x4, align 4
};
