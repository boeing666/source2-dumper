#pragma once

class CTriggerDetectExplosion : public CBaseTrigger /*0x0*/  // sizeof 0xC00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBE8]; // offset 0x0
    CEntityIOOutput m_OnDetectedExplosion; // offset 0xBE8, size 0x18, align 255
};
