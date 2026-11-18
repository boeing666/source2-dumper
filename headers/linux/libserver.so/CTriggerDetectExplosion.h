#pragma once

class CTriggerDetectExplosion : public CBaseTrigger /*0x0*/  // sizeof 0xD50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD38]; // offset 0x0
    CEntityIOOutput m_OnDetectedExplosion; // offset 0xD38, size 0x18, align 255
};
