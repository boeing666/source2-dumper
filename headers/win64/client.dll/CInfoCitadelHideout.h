#pragma once

class CInfoCitadelHideout : public C_PointEntity /*0x0*/  // sizeof 0x620, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CEntityIOOutput m_OnFastCooldownsEnabled; // offset 0x5F0, size 0x18, align 255
    CEntityIOOutput m_OnFastCooldownsDisabled; // offset 0x608, size 0x18, align 255
};
