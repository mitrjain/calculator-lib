pipeline {
    agent {
        docker { image 'mitrjain1996/calculator-env:latest' }
    }
    stages {
        stage('build') {
            steps{
                sh 'cd cross-compile'
                sh 'mkdir build'
                sh 'cd build'
                sh 'cmake ..'
                sh 'make'
            }
        }

        stage('test') {
            steps{
                sh './cross-compile/tests/test_Calculate'
            }
        }

        stage('publish') {
            steps{
                sh 'echo "Publish artificats."'
            }
        }
    }
}
