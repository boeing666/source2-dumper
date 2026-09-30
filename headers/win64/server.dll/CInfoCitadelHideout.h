#pragma once

class CInfoCitadelHideout : public CPointEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CEntityIOOutput m_OnFastCooldownsEnabled; // offset 0x4B0, size 0x18, align 255
    CEntityIOOutput m_OnFastCooldownsDisabled; // offset 0x4C8, size 0x18, align 255
};
