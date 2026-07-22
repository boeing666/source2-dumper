#pragma once

struct VMixEQ8Desc_t  // sizeof 0x80, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    VMixFilterDesc_t[8] m_stages; // offset 0x0, size 0x80, align 4
};
