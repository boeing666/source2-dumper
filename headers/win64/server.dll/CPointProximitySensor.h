#pragma once

class CPointProximitySensor : public CPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bDisabled; // offset 0x4A0, size 0x1, align 1
    char _pad_04A1[0x3]; // offset 0x4A1
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x4A4, size 0x4, align 4
    CEntityOutputTemplate< float32 > m_Distance; // offset 0x4A8, size 0x20, align 8
};
