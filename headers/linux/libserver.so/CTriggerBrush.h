#pragma once

class CTriggerBrush : public CBaseModelEntity /*0x0*/  // sizeof 0xB88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB38]; // offset 0x0
    CEntityIOOutput m_OnStartTouch; // offset 0xB38, size 0x18, align 255
    CEntityIOOutput m_OnEndTouch; // offset 0xB50, size 0x18, align 255
    CEntityIOOutput m_OnUse; // offset 0xB68, size 0x18, align 255
    int32 m_iInputFilter; // offset 0xB80, size 0x4, align 4
    int32 m_iDontMessageParent; // offset 0xB84, size 0x4, align 4
};
