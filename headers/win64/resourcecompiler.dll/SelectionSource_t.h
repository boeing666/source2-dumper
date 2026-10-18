#pragma once

enum SelectionSource_t : uint32_t  // sizeof 0x4
{
    SelectionSource_Bool = 0,
    SelectionSource_Enum = 1,
    SelectionSource_Tag = 2,
};
