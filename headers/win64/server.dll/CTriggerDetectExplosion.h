#pragma once

class CTriggerDetectExplosion : public CBaseTrigger /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x908]; // offset 0x0
    CEntityIOOutput m_OnDetectedExplosion; // offset 0x908, size 0x18, align 255
};
