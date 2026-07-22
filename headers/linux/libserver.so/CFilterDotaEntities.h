#pragma once

class CFilterDotaEntities : public CBaseFilter /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7B0]; // offset 0x0
    CDotaEntityFilterFlags m_FilterFlags; // offset 0x7B0, size 0x20, align 255
};
