#pragma once

struct SelectedEditItemInfo_t  // sizeof 0x18, align 0x8 (soundsystem) {MGetKV3ClassDefaults}
{
    CUtlVector< SosEditItemInfo_t > m_EditItems; // offset 0x0, size 0x18, align 8
};
