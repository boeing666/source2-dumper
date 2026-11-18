#pragma once

class CTriggerDetectBulletFire : public CBaseTrigger /*0x0*/  // sizeof 0xD28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD09]; // offset 0x0
    bool m_bPlayerFireOnly; // offset 0xD09, size 0x1, align 1
    char _pad_0D0A[0x6]; // offset 0xD0A
    CEntityIOOutput m_OnDetectedBulletFire; // offset 0xD10, size 0x18, align 255
};
