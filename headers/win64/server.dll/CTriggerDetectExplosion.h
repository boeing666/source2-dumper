#pragma once

class CTriggerDetectExplosion : public CBaseTrigger /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CEntityIOOutput m_OnDetectedExplosion; // offset 0xA58, size 0x18, align 255
};
