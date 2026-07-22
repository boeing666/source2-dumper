#pragma once

class CTriggerBrush : public CBaseModelEntity /*0x0*/  // sizeof 0xAA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xA58, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xA70, size 0x18, align 255
    CEntityIOOutput m_OnUse; // offset 0xA88, size 0x18, align 255
    int32 m_iInputFilter; // offset 0xAA0, size 0x4, align 4
    int32 m_iDontMessageParent; // offset 0xAA4, size 0x4, align 4
};
