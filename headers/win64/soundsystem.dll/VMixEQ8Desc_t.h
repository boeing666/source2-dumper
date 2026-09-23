#pragma once

struct VMixEQ8Desc_t  // sizeof 0xA0, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    VMixEQFilterDesc_t[8] m_stages; // offset 0x0, size 0xA0, align 4
};
