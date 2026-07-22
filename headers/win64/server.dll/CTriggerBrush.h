#pragma once

class CTriggerBrush : public CBaseModelEntity /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0x770, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0x788, size 0x18, align 255
    CEntityIOOutput m_OnUse; // offset 0x7A0, size 0x18, align 255
    int32 m_iInputFilter; // offset 0x7B8, size 0x4, align 4
    int32 m_iDontMessageParent; // offset 0x7BC, size 0x4, align 4
};
