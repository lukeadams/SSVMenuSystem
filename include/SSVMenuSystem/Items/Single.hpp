// Copyright (c) 2013-2015 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0

#ifndef SSVMS_ITEM_SINGLE
#define SSVMS_ITEM_SINGLE

namespace ssvms
{
    class Menu;
    class Category;

    namespace Items
    {
        class Single final : public ItemBase
        {
        private:
            Action action;

        public:
            Single(Menu& mMenu, Category& mCategory, const std::string& mName,
                Action mAction)
                : ItemBase{mMenu, mCategory, mName}, action{mAction}
            {
            }
            inline void exec() override { action(); }
        };
    }
}

#endif
