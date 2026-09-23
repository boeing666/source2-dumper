#pragma once

class CTriggerDetectBulletFire : public CBaseTrigger /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC99]; // offset 0x0
    bool m_bPlayerFireOnly; // offset 0xC99, size 0x1, align 1
    char _pad_0C9A[0x6]; // offset 0xC9A
    CEntityIOOutput m_OnDetectedBulletFire; // offset 0xCA0, size 0x18, align 255
};
