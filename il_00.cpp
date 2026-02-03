template<class T>
class initializer_list {
public:
    using value_type = T;
    using const_iterator = const T*;

    constexpr const T* begin() const noexcept;
    constexpr const T* end()   const noexcept;
    constexpr size_t size()    const noexcept;

private:
    const T* first;
    size_t   count;
};
