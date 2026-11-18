#pragma once

class CTriggerBrush : public CBaseModelEntity /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xBA0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xBB8, size 0x18, align 255
    CEntityIOOutput m_OnUse; // offset 0xBD0, size 0x18, align 255
    int32 m_iInputFilter; // offset 0xBE8, size 0x4, align 4
    int32 m_iDontMessageParent; // offset 0xBEC, size 0x4, align 4
};
