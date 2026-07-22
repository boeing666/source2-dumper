#pragma once

class CFilterDotaEntities : public CBaseFilter /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4D0]; // offset 0x0
    CDotaEntityFilterFlags m_FilterFlags; // offset 0x4D0, size 0x20, align 255
};
