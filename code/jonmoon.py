def message(name):
    print('\n')
    print('Hello, World!')
    print('And Hello, {}!'.format(name))
    print('\n')
    return 0


def main():
    name = input("Who are you?")
    message(name)


if __name__ == '__main__':
    main()
