#pragma once

class CTriggerDetectBulletFire : public CBaseTrigger /*0x0*/  // sizeof 0x9F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D0]; // offset 0x0
    bool m_bPlayerFireOnly; // offset 0x9D0, size 0x1, align 1
    char _pad_09D1[0x7]; // offset 0x9D1
    CEntityIOOutput m_OnDetectedBulletFire; // offset 0x9D8, size 0x18, align 255
};
