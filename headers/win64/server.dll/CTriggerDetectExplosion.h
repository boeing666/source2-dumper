#pragma once

class CTriggerDetectExplosion : public CBaseTrigger /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x918]; // offset 0x0
    CEntityIOOutput m_OnDetectedExplosion; // offset 0x918, size 0x18, align 255
};
